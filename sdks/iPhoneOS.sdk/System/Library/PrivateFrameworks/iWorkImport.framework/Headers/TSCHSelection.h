//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

@class NSArray, NSSet, TSCHChartDrawableInfo, TSCHSelectionPath, TSCHSelectionPathType;

__attribute__((visibility("hidden")))
@interface TSCHSelection : TSKSelection
{
    TSCHChartDrawableInfo *mInfo;
    NSArray *mPaths;
}

+ (Class)archivedSelectionClass;
+ (id)selectionWithChartInfo:(id)arg1 paths:(id)arg2;
+ (id)emptySelectionWithChartInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *paths; // @synthesize paths=mPaths;
@property(readonly, retain, nonatomic) TSCHChartDrawableInfo *chartInfo; // @synthesize chartInfo=mInfo;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *pathTypes;
@property(readonly, copy, nonatomic) TSCHSelectionPathType *pathType;
@property(readonly, copy, nonatomic) TSCHSelectionPath *firstPath;
@property(readonly, nonatomic) BOOL returnChartFrameForAutoscroll;
- (id)selectionByRemovingPathsFromArray:(id)arg1;
- (id)selectionByAddingPathsFromArray:(id)arg1;
@property(readonly, nonatomic) NSUInteger pathCount;
- (void)saveToArchive:(struct ChartSelectionArchive )arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct ChartSelectionArchive )arg1 unarchiver:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPaths:(id)arg1;
- (id)initWithChartInfo:(id)arg1 path:(id)arg2;
- (id)initWithChartInfo:(id)arg1 paths:(id)arg2;

@end
