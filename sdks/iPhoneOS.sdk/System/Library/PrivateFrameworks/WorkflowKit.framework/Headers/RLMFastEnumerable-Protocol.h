//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class RLMFastEnumerator, RLMRealm;

@protocol RLMFastEnumerable
@property(readonly, nonatomic) NSUInteger count;
@property(readonly, nonatomic) struct RLMClassInfo objectInfo;
@property(readonly, nonatomic) RLMRealm *realm;
- (RLMFastEnumerator *)fastEnumerator;
- (struct TableView)tableView;
@end
