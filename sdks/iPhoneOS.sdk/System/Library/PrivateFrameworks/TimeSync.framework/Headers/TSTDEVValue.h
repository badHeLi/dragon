//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSTDEVValue : NSObject
{
    double _observationInterval;
    double _tdev;
}

@property(readonly, nonatomic) double tdev; // @synthesize tdev=_tdev;
@property(readonly, nonatomic) double observationInterval; // @synthesize observationInterval=_observationInterval;
- (id)description;
- (id)initWithObservationInterval:(double)arg1 andTDEV:(double)arg2;

@end
