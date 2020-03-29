//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, WFTemperature;

@interface WAHourlyForecast : NSObject <NSCopying>
{
    float _percentPrecipitation;
    NSUInteger _eventType;
    NSString *_time;
    long long _hourIndex;
    WFTemperature *_temperature;
    NSString *_forecastDetail;
    long long _conditionCode;
}

+ (long long)TimeValueFromString:(id)arg1;
+ (id)hourlyForecastForLocation:(id)arg1 conditions:(id)arg2 sunriseDateComponents:(id)arg3 sunsetDateComponents:(id)arg4;
@property(nonatomic) float percentPrecipitation; // @synthesize percentPrecipitation=_percentPrecipitation;
@property(nonatomic) long long conditionCode; // @synthesize conditionCode=_conditionCode;
@property(copy, nonatomic) NSString *forecastDetail; // @synthesize forecastDetail=_forecastDetail;
@property(retain, nonatomic) WFTemperature *temperature; // @synthesize temperature=_temperature;
@property(nonatomic) long long hourIndex; // @synthesize hourIndex=_hourIndex;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(nonatomic) NSUInteger eventType; // @synthesize eventType=_eventType;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end
