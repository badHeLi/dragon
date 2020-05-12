//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/SBAppStatusBarAssertionManagerObserver-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneHandleObserver-Protocol.h>
#import <SpringBoard/SBMainDisplaySceneManagerObserver-Protocol.h>
#import <SpringBoard/SBUIActiveOrientationObserver-Protocol.h>

@class SBAppStatusBarAssertionManager, SBMainDisplaySceneManager, SpringBoard, UIApplicationSceneSettingsDiffInspector, UIStatusBarServer;
@protocol SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate;

@interface SBNotchedStatusBarProximityBacklightPolicyEnablementCondition : NSObject <SBAppStatusBarAssertionManagerObserver, SBMainDisplaySceneManagerObserver, SBDeviceApplicationSceneHandleObserver, UIStatusBarServerClient, SBUIActiveOrientationObserver, BSInvalidatable>
{
    SpringBoard *_orientationProvider;
    UIStatusBarServer *_statusBarConnection;
    SBAppStatusBarAssertionManager *_statusBarAssertionManager;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    UIApplicationSceneSettingsDiffInspector *_applicationSceneSettingsDiffInspector;
    int _currentStyleOverrides;
    id <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate> _delegate;
    double _statusBarHeight;
    BOOL _isEnabled;
    BOOL _invalidated;
}

@property(readonly, nonatomic) double enabledStatusBarHeight; // @synthesize enabledStatusBarHeight=_statusBarHeight;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_isEnabled;
@property(nonatomic) __weak id <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_evaluateEnablement;
- (void)_setEnabled:(BOOL)arg1 statusBarHeight:(double)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)statusBarAssertionManager:(id)arg1 statusBarSettingsDidChange:(id)arg2;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_0942cde0 )arg2 withActions:(int)arg3;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithMainDisplaySceneManager:(id)arg1 statusBarAssertionManager:(id)arg2 statusBarServer:(id)arg3 orientationProvider:(id)arg4;
- (id)init;

@end
