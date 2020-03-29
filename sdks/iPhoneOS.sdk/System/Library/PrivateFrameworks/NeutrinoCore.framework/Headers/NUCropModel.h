//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MISSING_TYPE;

@interface NUCropModel : NSObject <NSCopying>
{
    MISSING_TYPE *_imageCenter;
    CGRect _cropRect;
    double _pitchRadians;
    double _yawRadians;
    double _rollRadians;
    double _fovRadians;
    BOOL _isAutoCrop;
    NSUInteger _hitVertexID;
    CDStruct_d58201db _aspectRatio;
    CGRect _masterImageRect;
    CGRect _stitchedImageRect;
}

+ (double)defaultFocalLength;
+ (CDStruct_912cb5d2)freeFormAspectRatio;
+ (CDStruct_14d5dc5e)_imageTransformFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(CGRect)arg4;
@property(nonatomic) BOOL isAutoCrop; // @synthesize isAutoCrop=_isAutoCrop;
@property(readonly) NSUInteger hitVertexID; // @synthesize hitVertexID=_hitVertexID;
@property(nonatomic) CDStruct_912cb5d2 aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) CGRect stitchedImageRect; // @synthesize stitchedImageRect=_stitchedImageRect;
@property(readonly, nonatomic) double fovRadians; // @synthesize fovRadians=_fovRadians;
@property(readonly, nonatomic) CGRect masterImageRect; // @synthesize masterImageRect=_masterImageRect;
@property(readonly, nonatomic) double rollDegreeUI;
@property(readonly, nonatomic) double yawDegreeUI;
@property(readonly, nonatomic) double pitchDegreeUI;
@property(nonatomic) double rollRadians;
@property(nonatomic) double yawRadians;
@property(nonatomic) double pitchRadians;
- (CDStruct_912cb5d2)originalAspectRatio;
- (BOOL)aspectRatioIsFreeForm;
- (BOOL)aspectRatioIsOriginal;
- (CDStruct_912cb5d2)_currentAspectRatio:(CGRect)arg1;
- (double)_currentAspectAsDouble:(CGRect)arg1;
- (void)makeCurrentFreeFormAspectFixed;
- (void)makeCurrentAspectRatioFreeForm;
- (NSUInteger)setAspectRatio:(CDStruct_912cb5d2)arg1 constrainCropRect:(CGRect)arg2 withTargetArea:(double)arg3;
- (NSUInteger)setYawAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(CGRect)arg3 startAngle:(double)arg4;
- (NSUInteger)setPitchAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(CGRect)arg3 startAngle:(double)arg4;
- (NSUInteger)setRollAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(CGRect)arg3 startAngle:(double)arg4;
- (NSUInteger)setYawAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2;
- (NSUInteger)setPitchAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2;
- (NSUInteger)setRollAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2;
- (NSUInteger)constrainedMoveCropRectBy:(CGVector)arg1 strict:(BOOL)arg2 startRect:(CGRect)arg3;
- (NSUInteger)constrainedMoveCropRectBy:(CGVector)arg1 strict:(BOOL)arg2;
- (NSUInteger)constrainedMoveCropRectBy:(CGVector)arg1;
- (CGRect)getCropRectThatCompletelyContainsMasterImageForPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3;
- (CGRect)getCropRect:(CGRect)arg1 newCropRect:(CGRect)arg2 pitch:(double)arg3 yaw:(double)arg4 roll:(double)arg5 constrainWithAnchorPoint:(CGPoint)arg6 strict:(BOOL)arg7 aspectRatioIsFreeForm:(BOOL)arg8 hitVertexId:(NSUInteger )arg9;
- (CGRect)_expandedCropRectForZoom:(CGRect)arg1 candidateRect:(CGRect)arg2;
- (NSUInteger)setForZoomCropRect:(CGRect)arg1 newCropRect:(CGRect)arg2;
- (NSUInteger)setCropRect:(CGRect)arg1 newCropRect:(CGRect)arg2 constrainWithAnchorPoint:(CGPoint)arg3 strict:(BOOL)arg4;
- (NSUInteger)setCropRect:(CGRect)arg1 newCropRect:(CGRect)arg2 constrainWithAnchorPoint:(CGPoint)arg3;
- (NSUInteger)setCropRect:(CGRect)arg1 constrainWithAnchorPoint:(CGPoint)arg2;
- (BOOL)imageContainsRect:(CGRect)arg1 withTol:(double)arg2;
- (BOOL)canGrowCropRect:(CGRect)arg1 constrainWithAnchorPoint:(CGPoint)arg2 strict:(BOOL)arg3 withTol:(double)arg4;
- (CGRect)_anchorAlignedRectFromCandidate:(CGRect)arg1 withAnchor:(CGPoint)arg2;
- (void)_debugPrintHitMask:(NSUInteger)arg1;
- (void)_debugPrintHitMask;
- (NSUInteger)_hitMaskFromRect:(CGRect)arg1 withTol:(double)arg2;
- (NSUInteger)_hitMaskFromRect:(CGRect)arg1;
- (void)_setCropRectWithConstantSize:(CGRect)arg1;
- (void)_setCropRect:(CGRect)arg1 anchor:(CGPoint)arg2;
- (void)_setCropRect:(CGRect)arg1;
@property CGRect cropRect;
- (CGRect)_integralCropRect:(CGRect)arg1 straightenAngle:(double)arg2 anchorPoint:(CGPoint)arg3;
- (CGRect)integralCropRect:(CGRect)arg1;
- (CDStruct_14d5dc5e)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 withExpansionTol:(double)arg4 imageRect:(CGRect)arg5;
- (CDStruct_14d5dc5e)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 withExpansionTol:(double)arg4;
- (struct Quad2d)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(CGRect)arg4;
- (struct Quad2d)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3;
- (struct Quad2d)_getBoundingQuad;
- (BOOL)_hasDefaultValues;
- (void)_setToDefaultValues;
- (CGRect)_defaultCropRect;
- (MISSING_TYPE *)_defaultImageCenter;
- (CGRect)_widestCropRect;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqualToCropModel:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) CGSize stitchedImageSize;
@property(readonly) BOOL cropNeedsOvercapture;
@property(readonly, nonatomic) BOOL hasOvercapture;
@property(readonly, nonatomic) CGSize masterImageSize;
@property(readonly) BOOL hasCrop;
- (void)reset;
- (id)copyWithMasterImageSize:(CGSize)arg1 fovRadians:(double)arg2;
- (id)initWithMasterImageRect:(CGRect)arg1 stitchedImageRect:(CGRect)arg2;
- (id)initWithMasterImageSize:(CGSize)arg1 stitchedImageSize:(CGSize)arg2;
- (id)initWithMasterImageSize:(CGSize)arg1 fovRadians:(double)arg2;
- (id)initWithMasterImageRect:(CGRect)arg1;
- (id)initWithMasterImageSize:(CGSize)arg1;
- (id)init;

@end
