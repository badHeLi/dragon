//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFUserAuthenticationModel-Protocol.h>

@class SBFMobileKeyBag;
@protocol SBFUserAuthenticationModelDelegate;

@interface SBFUserAuthenticationModelEducationalMode : NSObject <SBFUserAuthenticationModel>
{
    SBFMobileKeyBag *_keybag;
    BOOL _pendingWipe;
    id <SBFUserAuthenticationModelDelegate> _delegate;
}

@property(nonatomic) id <SBFUserAuthenticationModelDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_refreshStateForMkbState:(id)arg1 notify:(BOOL)arg2;
- (id)_refreshStateAndNotify:(BOOL)arg1;
- (void)performPasswordTest:(id /* CDUnknownBlockType */)arg1;
- (void)noteNewMkbDeviceLockState:(id)arg1;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeEntryBegan;
- (void)synchronize;
@property(readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property(readonly, nonatomic, getter=isPermanentlyBlocked) BOOL permanentlyBlocked;
@property(readonly, nonatomic, getter=isTemporarilyBlocked) BOOL temporarilyBlocked;
- (id)initWithKeyBag:(id)arg1;

@end
