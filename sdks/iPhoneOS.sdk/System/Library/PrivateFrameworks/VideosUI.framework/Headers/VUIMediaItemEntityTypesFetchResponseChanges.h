//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VUICollectionChangeSet;

__attribute__((visibility("hidden")))
@interface VUIMediaItemEntityTypesFetchResponseChanges : NSObject
{
    BOOL _localMediaItemsAvailableDidChange;
    VUICollectionChangeSet *_mediaItemEntityTypesChangeSet;
}

@property(readonly, nonatomic) BOOL localMediaItemsAvailableDidChange; // @synthesize localMediaItemsAvailableDidChange=_localMediaItemsAvailableDidChange;
@property(readonly, nonatomic) VUICollectionChangeSet *mediaItemEntityTypesChangeSet; // @synthesize mediaItemEntityTypesChangeSet=_mediaItemEntityTypesChangeSet;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithMediaItemEntityTypesChangeSet:(id)arg1 localMediaItemsAvailableDidChange:(BOOL)arg2;
- (id)init;

@end
