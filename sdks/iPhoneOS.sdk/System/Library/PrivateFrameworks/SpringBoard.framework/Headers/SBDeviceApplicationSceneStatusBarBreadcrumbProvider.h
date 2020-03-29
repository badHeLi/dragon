//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBDeviceApplicationSceneHandleObserver-Protocol.h>

@class NSHashTable, NSString, SBBreadcrumbActionContext, SBDeviceApplicationSceneHandle, SiriBreadcrumbSource;

@interface SBDeviceApplicationSceneStatusBarBreadcrumbProvider : NSObject <SBDeviceApplicationSceneHandleObserver>
{
    SiriBreadcrumbSource *_siriSource;
    SBBreadcrumbActionContext *_currentBreadcrumbActionContext;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    NSHashTable *_observers;
}

+ (id)_breadcrumbSceneIdForForAppWithBundleID:(id)arg1 activatingSceneEntity:(id)arg2 withTransitionContext:(id)arg3;
+ (id)_breadcrumbBundleIdForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
+ (id)_breadcrumbPrimaryTitleForAppWithBundleID:(id)arg1 sceneHandle:(id)arg2 activatingSceneEntity:(id)arg3;
+ (id)_destinationContextsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
+ (BOOL)_shouldAddBreadcrumbToActivatingSceneEntity:(id)arg1 sceneHandle:(id)arg2 withTransitionContext:(id)arg3;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(BOOL)arg2;
- (void)_activateAppLink:(id)arg1 withAppLinkState:(id)arg2 wasFromSpotlight:(BOOL)arg3 previousSideBundleID:(id)arg4 previousBreadcrumb:(id)arg5;
- (void)_activateBreadcrumbApplication:(id)arg1 withSceneIdentifier:(id)arg2;
- (long long)_openStrategyForAppLinkState:(id)arg1;
- (void)_presentSpotlightFromBreadcrumbWithSource:(NSUInteger)arg1;
- (void)_presentAssistantFromBreadcrumb;
- (void)_handleBreadcrumbAction:(NSUInteger)arg1 analyticsSide:(NSUInteger)arg2;
- (id)_breadcrumbNavigationActionContextForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (void)noteDidUpdateDisplayProperties;
- (void)prepareForReuse;
- (BOOL)activateSecondaryBreadcrumbIfPossible;
- (BOOL)activateBreadcrumbIfPossible;
@property(readonly, copy, nonatomic) NSString *breadcrumbSecondaryTitle;
@property(readonly, copy, nonatomic) NSString *breadcrumbTitle;
- (BOOL)_hasSecondaryBreadcrumb;
- (BOOL)_hasPrimaryBreadcrumb;
@property(readonly, nonatomic) BOOL hasBreadcrumb;
- (id)breadcrumbActionsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (void)captureContextForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithSceneHandle:(id)arg1;

@end
