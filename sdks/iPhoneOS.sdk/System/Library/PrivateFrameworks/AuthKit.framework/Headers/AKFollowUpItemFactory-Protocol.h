//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FLFollowUpItem, NSArray, NSString;

@protocol AKFollowUpItemFactory <NSObject>
- (BOOL)IsFollowUpItemNotificationForced:(FLFollowUpItem *)arg1;
- (NSArray *)itemIdentifiersRequiringNotificationClearFromPayload:(NSArray *)arg1;
- (NSArray *)itemsForAltDSID:(NSString *)arg1 fromIDMSPayload:(NSArray *)arg2;
@end
