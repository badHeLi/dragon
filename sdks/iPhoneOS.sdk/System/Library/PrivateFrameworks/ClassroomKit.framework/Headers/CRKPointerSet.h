//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSHashTable;

@interface CRKPointerSet : NSObject <NSFastEnumeration>
{
    NSHashTable *mBackingStore;
}

+ (id)setWithSet:(id)arg1;
+ (id)setWithArray:(id)arg1;
// - (void).cxx_destruct;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)setByIntersectingSet:(id)arg1;
- (id)setBySubtractingSet:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) long long count;
- (BOOL)isSubsetOfSet:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end
