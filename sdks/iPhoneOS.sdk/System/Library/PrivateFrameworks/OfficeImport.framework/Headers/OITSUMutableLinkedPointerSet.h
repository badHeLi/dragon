//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class OITSULinkedPointerSetEntry;

__attribute__((visibility("hidden")))
@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration>
{
    struct __CFDictionary mDictionary;
    OITSULinkedPointerSetEntry *mHead;
    OITSULinkedPointerSetEntry *mTail;
}

- (id)array;
- (NSUInteger)count;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)insertFirstObject:(id)arg1;
- (void)addObject:(id)arg1;
- (BOOL)hasObjects;
- (BOOL)containsObject:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)firstObject;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)objectEnumeratorAfterObject:(id)arg1;
- (id)reverseObjectEnumerator;
- (id)objectEnumerator;
- (void)dealloc;
- (id)init;

@end
