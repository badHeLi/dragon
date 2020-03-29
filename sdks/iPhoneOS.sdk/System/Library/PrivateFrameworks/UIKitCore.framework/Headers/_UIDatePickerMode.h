//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDateComponents, NSNumberFormatter, NSString, UIColor, UIFont, _UIDatePickerView;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode : NSObject
{
    NSDateComponents *_selectedDateComponents;
    NSDateComponents *_baseDateComponents;
    NSUInteger _elements;
    long long _yearsSinceBaseDate;
    _NSRange _maxDayRange;
    _NSRange _maxMonthRange;
    NSString *_localizedFormatString;
    NSArray *_dateFormatters;
    UIColor *_todayTextColor;
    UIFont *_amPmFont;
    UIFont *_font;
    UIFont *_defaultTimeFont;
    NSString *_amString;
    NSString *_pmString;
    NSDateComponents *_todayDateComponents;
    NSNumberFormatter *_formatter;
    _UIDatePickerView *_datePickerView;
    BOOL _isUsingJapaneseCalendar;
    long long _minuteInterval;
    double _todaySinceReferenceDate;
    NSDate *_minimumDate;
    NSDateComponents *_minimumDateComponents;
    NSDate *_maximumDate;
    NSDateComponents *_maximumDateComponents;
    NSUInteger _numberOfComponents;
    NSDate *_baseDate;
    NSDate *_originatingDate;
}

+ (NSUInteger)extractableCalendarUnits;
+ (id)_datePickerModeWithFormatString:(id)arg1 datePickerView:(id)arg2;
+ (id)_datePickerModeWithMode:(long long)arg1 datePickerView:(id)arg2;
+ (long long)datePickerMode;
+ (id)newDateFromGregorianYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 timeZone:(id)arg4;
+ (void)initialize;
@property(retain, nonatomic) NSDateComponents *selectedDateComponents; // @synthesize selectedDateComponents=_selectedDateComponents;
@property(retain, nonatomic) NSDate *originatingDate; // @synthesize originatingDate=_originatingDate;
@property(nonatomic) long long yearsSinceBaseDate; // @synthesize yearsSinceBaseDate=_yearsSinceBaseDate;
@property(retain, nonatomic) NSDate *baseDate; // @synthesize baseDate=_baseDate;
@property(retain, nonatomic) NSString *localizedFormatString; // @synthesize localizedFormatString=_localizedFormatString;
@property(nonatomic) NSUInteger numberOfComponents; // @synthesize numberOfComponents=_numberOfComponents;
@property(nonatomic) __weak _UIDatePickerView *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(readonly, nonatomic) NSDateComponents *maximumDateComponents; // @synthesize maximumDateComponents=_maximumDateComponents;
@property(readonly, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(readonly, nonatomic) NSDateComponents *minimumDateComponents; // @synthesize minimumDateComponents=_minimumDateComponents;
@property(readonly, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(nonatomic) double todaySinceReferenceDate; // @synthesize todaySinceReferenceDate=_todaySinceReferenceDate;
@property(nonatomic) long long minuteInterval; // @synthesize minuteInterval=_minuteInterval;
// - (void).cxx_destruct;
- (void)updateEnabledStateOfViewForRow:(long long)arg1 inComponent:(long long)arg2;
- (BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(NSUInteger)arg3;
- (BOOL)_shouldEnableValueForRow:(long long)arg1 column:(long long)arg2;
- (BOOL)_scrollingAnyColumnExcept:(int)arg1;
- (BOOL)_isComponentScrolling:(long long)arg1;
- (BOOL)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2;
- (id)viewForRow:(long long)arg1 inComponent:(long long)arg2 reusingView:(id)arg3;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;
- (BOOL)_monthExists:(long long)arg1 inYear:(long long)arg2;
- (long long)_numberOfDaysInDateComponents:(id)arg1;
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1 usingSelectionBarValue:(BOOL)arg2;
- (void)resetSelectedDateComponentsWithValuesUnderSelectionBars;
- (void)updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1;
- (void)loadDate:(id)arg1 animated:(BOOL)arg2;
- (long long)validateValue:(long long)arg1 forCalendarUnit:(NSUInteger)arg2;
- (long long)rowForValue:(long long)arg1 forCalendarUnit:(NSUInteger)arg2 currentRow:(long long)arg3;
- (long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(NSUInteger)arg3;
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;
- (_NSRange)rangeForCalendarUnit:(NSUInteger)arg1;
- (long long)titleAlignmentForCalendarUnit:(NSUInteger)arg1;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (id)dateFormatForCalendarUnit:(NSUInteger)arg1;
- (id)dateForRow:(long long)arg1 inCalendarUnit:(NSUInteger)arg2;
- (long long)valueForRow:(long long)arg1 inCalendarUnit:(NSUInteger)arg2;
- (long long)eraForYearRow:(long long)arg1;
- (long long)yearForRow:(long long)arg1;
- (long long)monthForRow:(long long)arg1;
- (long long)dayForRow:(long long)arg1;
- (long long)hourForRow:(long long)arg1;
- (long long)minuteForRow:(long long)arg1;
- (long long)secondForRow:(long long)arg1;
- (id)_dateForYearRow:(long long)arg1;
- (id)_dateByEnsuringValue:(long long)arg1 forCalendarUnit:(NSUInteger)arg2;
- (NSUInteger)nextUnitSmallerThanUnit:(NSUInteger)arg1;
- (NSUInteger)nextUnitLargerThanUnit:(NSUInteger)arg1;
- (long long)_incrementForStaggeredTimeIntervals;
- (double)totalComponentWidthWithFont:(id)arg1;
@property(readonly, nonatomic) double totalComponentWidth; // @dynamic totalComponentWidth;
- (void)resetComponentWidths;
- (void)noteCalendarChanged;
- (long long)numberOfRowsForCalendarUnit:(NSUInteger)arg1;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (long long)componentForCalendarUnit:(NSUInteger)arg1;
- (NSUInteger)calendarUnitForComponent:(long long)arg1;
@property(readonly, nonatomic) long long displayedCalendarUnits;
- (void)fixUpElementsForRTL;
@property(nonatomic) NSUInteger elements;
@property(readonly, nonatomic, getter=isTimeIntervalMode) BOOL isTimeIntervalMode; // @dynamic isTimeIntervalMode;
- (double)widthForCalendarUnit:(NSUInteger)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (double)widthForComponent:(long long)arg1 maxWidth:(double)arg2;
@property(readonly, nonatomic) UIColor *todayTextColor;
@property(readonly, nonatomic) double rowHeight;
@property(readonly, nonatomic) UIFont *amPmFont;
@property(readonly, nonatomic) UIFont *defaultTimeFont;
@property(readonly, nonatomic) UIFont *sizedFont;
@property(readonly, nonatomic) UIFont *font;
- (id)fontForCalendarUnit:(NSUInteger)arg1;
@property(readonly, nonatomic) NSString *pmString;
@property(readonly, nonatomic) NSString *amString;
@property(retain, nonatomic) NSDateComponents *baseDateComponents;
- (void)clearBaseDate;
@property(retain, nonatomic) NSDateComponents *todayDateComponents;
- (id)dateFormatterForCalendarUnit:(NSUInteger)arg1;
@property(readonly, nonatomic) long long datePickerMode;
@property(readonly, nonatomic, getter=is24Hour) BOOL is24Hour; // @dynamic is24Hour;
- (double)componentWidthForTwoDigitCalendarUnit:(NSUInteger)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (void)_shouldReset:(id)arg1;
- (id)timeZone;
- (id)locale;
- (id)calendarForFormatters;
- (id)calendar;
- (long long)_yearlessYearForMonth:(long long)arg1;
- (void)dealloc;
- (id)init;

@end
