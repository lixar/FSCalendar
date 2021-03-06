//
//  FSCalendarDynamicHeader.h
//  Pods
//
//  Created by DingWenchao on 6/29/15.
//
//  动感头文件，仅供框架内部使用。
//  Private header, don't use it.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "FSCalendar.h"
#import "FSCalendarCell.h"
#import "FSCalendarHeader.h"
#import "FSCalendarStickyHeader.h"

@interface FSCalendar (Dynamic)

@property (readonly, nonatomic) CAShapeLayer *maskLayer;
@property (readonly, nonatomic) FSCalendarHeader *header;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (readonly, nonatomic) NSArray *weekdays;
@property (readonly, nonatomic) BOOL ibEditing;
@property (readonly, nonatomic) BOOL floatingMode;
@property (readonly, nonatomic) NSArray *visibleStickyHeaders;
@property (readonly, nonatomic) CGFloat preferedHeaderHeight;
@property (readonly, nonatomic) CGFloat preferedWeekdayHeight;
@property (readonly, nonatomic) CGFloat preferedRowHeight;
@property (readonly, nonatomic) UIView *bottomBorder;

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDateComponents *components;
@property (readonly, nonatomic) NSDateFormatter *formatter;

@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *daysContainer;

@property (assign, nonatomic) BOOL needsAdjustingMonthPosition;
@property (assign, nonatomic) BOOL needsAdjustingViewFrame;

- (void)invalidateWeekdayFont;
- (void)invalidateWeekdayTextColor;

- (void)invalidateSeparatorColor;

- (void)invalidateHeaders;
- (void)invalidateWeekdaySymbols;
- (void)invalidateAppearanceForCell:(FSCalendarCell *)cell;

- (NSDate *)dateForIndexPath:(NSIndexPath *)indexPath;
- (NSDate *)dateForIndexPath:(NSIndexPath *)indexPath scope:(FSCalendarScope)scope;
- (NSIndexPath *)indexPathForDate:(NSDate *)date;
- (NSIndexPath *)indexPathForDate:(NSDate *)date scope:(FSCalendarScope)scope;

- (CGSize)sizeThatFits:(CGSize)size scope:(FSCalendarScope)scope;

- (NSDate *)findMonthForWeek:(NSDate *)week withRow:(NSInteger *)row;

@end

@interface FSCalendarAppearance (Dynamic)

@property (readwrite, nonatomic) FSCalendar *calendar;

@property (readonly, nonatomic) NSDictionary *backgroundColors;
@property (readonly, nonatomic) NSDictionary *titleColors;
@property (readonly, nonatomic) NSDictionary *subtitleColors;
@property (readonly, nonatomic) NSDictionary *borderColors;

@property (readonly, nonatomic) UIFont *preferredTitleFont;
@property (readonly, nonatomic) UIFont *preferredSubtitleFont;
@property (readonly, nonatomic) UIFont *preferredWeekdayFont;
@property (readonly, nonatomic) UIFont *preferredHeaderTitleFont;

- (void)adjustTitleIfNecessary;
- (void)invalidateFonts;

@end


@interface FSCalendarHeader (Dynamic)

@property (readonly, nonatomic) UICollectionView *collectionView;

@end


