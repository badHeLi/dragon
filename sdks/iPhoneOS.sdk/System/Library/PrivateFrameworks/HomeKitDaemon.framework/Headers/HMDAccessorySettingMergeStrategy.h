//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber;

@interface HMDAccessorySettingMergeStrategy : HMFObject
{
    NSNumber *_conflictValue;
    long long _strategy;
}

@property(readonly, nonatomic) long long strategy; // @synthesize strategy=_strategy;
@property(readonly, nonatomic) NSNumber *conflictValue; // @synthesize conflictValue=_conflictValue;
// - (void).cxx_destruct;
- (id)initWithMergeStrategy:(id)arg1;

@end
