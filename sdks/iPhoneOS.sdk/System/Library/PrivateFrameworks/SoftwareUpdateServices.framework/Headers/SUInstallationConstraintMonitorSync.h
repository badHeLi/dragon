//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@interface SUInstallationConstraintMonitorSync : SUInstallationConstraintMonitorBase
{
    BOOL _queue_isSyncing;
}

- (void)_queue_setSyncing:(BOOL)arg1;
- (NSUInteger)unsatisfiedConstraints;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;

@end
