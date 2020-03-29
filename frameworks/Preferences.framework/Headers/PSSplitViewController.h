//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PSRootController;
@protocol PSSplitViewControllerNavigationDelegate;

@interface PSSplitViewController : UISplitViewController
{
    id <PSSplitViewControllerNavigationDelegate> _navigationDelegate;
    PSRootController *_containerNavigationController;
}

@property(retain, nonatomic) PSRootController *containerNavigationController; // @synthesize containerNavigationController=_containerNavigationController;
@property(nonatomic) __weak id <PSSplitViewControllerNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
// - (void).cxx_destruct;
- (id)categoryController;
- (void)setViewControllers:(id)arg1;
- (void)setupControllerForToolbar:(id)arg1;
- (id)childViewControllerForStatusBarStyle;
- (void)showInitialViewController:(id)arg1;
- (void)popRecursivelyToRootController;
- (NSUInteger)supportedInterfaceOrientations;

@end
