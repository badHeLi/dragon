//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, NSError;

@interface PXVideoContentProviderLoadingResult : NSObject
{
    AVPlayerItem *_playerItem;
    NSError *_error;
    long long _priority;
}

@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithPlayerItem:(id)arg1 error:(id)arg2 priority:(long long)arg3;

@end
