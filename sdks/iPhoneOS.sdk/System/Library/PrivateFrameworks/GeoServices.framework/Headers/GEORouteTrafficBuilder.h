//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface GEORouteTrafficBuilder : NSObject
{
    NSMutableData *_trafficColors;
    NSMutableData *_trafficOffsets;
    unsigned int _trafficDistance;
}

// - (void).cxx_destruct;
- (id)trafficOffsets;
- (id)trafficColors;
- (void)copyTrafficToRoute:(id)arg1;
- (void)_removeDuplicateTraffic;
- (void)addTrafficFromETARoute:(id)arg1;
- (void)addTrafficFromRoute:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)addTrafficFromRoute:(id)arg1 withStepRange:(_NSRange)arg2;
- (id)init;

@end
