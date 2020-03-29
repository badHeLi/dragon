//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartLayoutItem.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TSCHChartBodyLayoutItem : TSCHChartLayoutItem
{
    BOOL mVertical;
}

- (CGPath )newDragAndDropHighlightPathForSelection:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)p_refLineSubselectionKnobsForStyleSwapIndex:(NSUInteger)arg1;
- (id)p_trendLineR2SubselectionKnobsForSeries:(id)arg1;
- (id)p_trendLineEquationSubselectionKnobsForSeries:(id)arg1;
- (id)p_trendLineSubselectionKnobsForSeries:(id)arg1;
- (id)p_errorBarSubselectionKnobsForSeries:(id)arg1 axisID:(id)arg2;
- (id)p_valueLabelSubselectionKnobsForSeries:(id)arg1;
- (BOOL)layoutSpacePointIsInChartBody:(CGPoint)arg1;
- (void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)countOfElementsForModel:(id)arg1 series:(id)arg2 forGroupsBySeries:(id)arg3 outNewElementBounds:(CGRect )arg4 outNewClipRects:(CGRect )arg5 outNewElementPaths:(const CGPath )arg6;
- (CGAffineTransform)transformForRenderingLabelForSeries:(NSUInteger)arg1 forGroup:(NSUInteger)arg2 outElementSize:(CGSize )arg3 outClipRect:(CGRect )arg4;
- (CGAffineTransform)p_transformForRenderingLabelForLineAreaSeries:(NSUInteger)arg1 forGroup:(NSUInteger)arg2 outElementSize:(CGSize )arg3 outClipRect:(CGRect )arg4;
- (CGAffineTransform)p_transformForRenderingLabelForBarColSeries:(NSUInteger)arg1 forGroup:(NSUInteger)arg2 outElementSize:(CGSize )arg3 outClipRect:(CGRect )arg4;
- (void)p_nudgeBarElementFrame:(CGRect )arg1 usingBarModelCache:(id)arg2 unitSpaceValueBegin:(double)arg3 unitSpaceValueEnd:(double)arg4;
- (id)renderersWithRep:(id)arg1;
- (void)p_addRendererOfClass:(Class)arg1 andRep:(id)arg2 toArray:(id)arg3;
- (void)p_layoutOutward;
- (CGRect)calcOverhangRect;
- (CGRect)p_calcDrawingRectForModel:(id)arg1;
- (CGRect)p_exactLabelsDrawingRectForSeries:(id)arg1;
- (CGRect)p_calcDrawingRectForReferenceLinesForModel:(id)arg1;
- (CGRect)calcDrawingRect;
@property(readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
- (id)initWithParent:(id)arg1;

@end
