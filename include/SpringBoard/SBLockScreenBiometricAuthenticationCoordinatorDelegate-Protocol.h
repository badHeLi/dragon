//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBAuthenticationFeedback, SBLockScreenBiometricAuthenticationCoordinator;

@protocol SBLockScreenBiometricAuthenticationCoordinatorDelegate <NSObject>
- (BOOL)biometricAuthenticationCoordinator:(SBLockScreenBiometricAuthenticationCoordinator *)arg1 requestsUnlockWithIntent:(int)arg2;
- (BOOL)biometricAuthenticationCoordinator:(SBLockScreenBiometricAuthenticationCoordinator *)arg1 requestsAuthenticationFeedback:(SBAuthenticationFeedback *)arg2;
@end
