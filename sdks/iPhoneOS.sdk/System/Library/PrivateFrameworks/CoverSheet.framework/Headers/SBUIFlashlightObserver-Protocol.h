//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SBUIFlashlightObserver <NSObject>
- (void)flashlightAvailabilityDidChange:(BOOL)arg1;
- (void)flashlightLevelDidChange:(NSUInteger)arg1;

@optional
- (void)flashlightOverheatedDidChange:(BOOL)arg1;
@end
