//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, SBActivationSettings;

@interface SBIconLaunchContext : NSObject
{
    SBActivationSettings *_activationSettings;
    NSSet *_actions;
}

@property(copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) SBActivationSettings *activationSettings; // @synthesize activationSettings=_activationSettings;
// - (void).cxx_destruct;

@end
