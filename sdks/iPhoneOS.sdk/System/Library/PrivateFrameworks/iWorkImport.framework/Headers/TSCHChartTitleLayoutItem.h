//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartLayoutItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCHChartTitleLayoutItem : TSCHChartLayoutItem
{
    double mChartBodyWidth;
    NSString *mEditedString;
    double mMinHitSize;
}

@property(nonatomic) double minHitSize; // @synthesize minHitSize=mMinHitSize;
@property(copy, nonatomic) NSString *editedString; // @synthesize editedString=mEditedString;
@property(nonatomic) double chartBodyWidth; // @synthesize chartBodyWidth=mChartBodyWidth;
// - (void).cxx_destruct;
- (CGPath )newDragAndDropHighlightPathForSelection:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (BOOL)pointHitsTitleRect:(CGPoint)arg1;
- (CGAffineTransform)searchSelectionTransformForRenderingRange:(_NSRange)arg1 outElementSize:(CGSize )arg2 outClipRect:(CGRect )arg3;
- (CGAffineTransform)transformForRenderingRange:(_NSRange)arg1 outElementSize:(CGSize )arg2 outClipRect:(CGRect )arg3;
- (CGAffineTransform)transformForRenderingOutElementSize:(CGSize )arg1 outClipRect:(CGRect )arg2;
- (CGAffineTransform)transformForRenderingOutElementSize:(CGSize )arg1 outClipRect:(CGRect )arg2 forSubselection:(BOOL)arg3;
- (CGAffineTransform)p_transformForRenderingRangePtr:(_NSRange )arg1 outElementSize:(CGSize )arg2 outClipRect:(CGRect )arg3 forSubselection:(BOOL)arg4 forSearchSelection:(BOOL)arg5;
- (id)renderersWithRep:(id)arg1;
- (CGRect)calcOverhangRect;
- (CGRect)calcDrawingRect;
- (CGSize)calcMinSizeForModel:(id)arg1;
- (CGSize)calcMinSize;
- (BOOL)shouldPlaceTitleAtCenter;
- (id)titleText;
- (id)p_titleParagraphStyle;
- (id)initWithParent:(id)arg1;

@end
