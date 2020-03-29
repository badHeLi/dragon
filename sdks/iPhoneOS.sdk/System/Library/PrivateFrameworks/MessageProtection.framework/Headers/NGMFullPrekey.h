//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DHKey, NGMPublicPreKey;

__attribute__((visibility("hidden")))
@interface NGMFullPrekey : NSObject
{
    DHKey *_dhKey;
    NGMPublicPreKey *_publicPrekey;
}

@property(readonly, nonatomic) NGMPublicPreKey *publicPrekey; // @synthesize publicPrekey=_publicPrekey;
@property(readonly, nonatomic) DHKey *dhKey; // @synthesize dhKey=_dhKey;
// - (void).cxx_destruct;
- (BOOL)delete;
- (id)description;
- (id)pbDevicePrekey;
- (id)initWithPBPrekey:(id)arg1 error:(id )arg2;
- (id)initWithPrekeySignedBy:(id)arg1 error:(id )arg2;

@end
