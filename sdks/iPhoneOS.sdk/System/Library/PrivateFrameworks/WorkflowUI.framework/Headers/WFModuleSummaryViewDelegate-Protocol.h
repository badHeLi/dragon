//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIViewController, WFModuleSummaryView;

@protocol WFModuleSummaryViewDelegate <NSObject>
- (void)summaryViewDidInvalidateSize:(WFModuleSummaryView *)arg1;
- (void)summaryViewDidEndEditing:(WFModuleSummaryView *)arg1;
- (void)summaryViewWillBeginEditing:(WFModuleSummaryView *)arg1;
- (UIViewController *)viewControllerContainingSummaryView:(WFModuleSummaryView *)arg1;
@end
