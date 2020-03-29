//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/FigCaptureSinkConfiguration.h>

@class NSDictionary;

@interface FigCaptureVisionDataSinkConfiguration : FigCaptureSinkConfiguration
{
    float _maxFrameRate;
    float _maxBurstFrameRate;
    CDStruct_1b6d18a9 _maxBurstDuration;
    unsigned int _gaussianPyramidOctavesCount;
    float _gaussianPyramidBaseOctaveDownscalingFactor;
    unsigned int _maxKeypointsCount;
    float _keypointDetectionThreshold;
    BOOL _featureBinningEnabled;
    BOOL _featureOrientationAssignmentEnabled;
}

@property(nonatomic) BOOL featureOrientationAssignmentEnabled; // @synthesize featureOrientationAssignmentEnabled=_featureOrientationAssignmentEnabled;
@property(nonatomic) BOOL featureBinningEnabled; // @synthesize featureBinningEnabled=_featureBinningEnabled;
@property(nonatomic) float keypointDetectionThreshold; // @synthesize keypointDetectionThreshold=_keypointDetectionThreshold;
@property(nonatomic) unsigned int maxKeypointsCount; // @synthesize maxKeypointsCount=_maxKeypointsCount;
@property(nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor; // @synthesize gaussianPyramidBaseOctaveDownscalingFactor=_gaussianPyramidBaseOctaveDownscalingFactor;
@property(nonatomic) unsigned int gaussianPyramidOctavesCount; // @synthesize gaussianPyramidOctavesCount=_gaussianPyramidOctavesCount;
@property(nonatomic) CDStruct_1b6d18a9 maxBurstDuration; // @synthesize maxBurstDuration=_maxBurstDuration;
@property(nonatomic) float maxBurstFrameRate; // @synthesize maxBurstFrameRate=_maxBurstFrameRate;
@property(nonatomic) float maxFrameRate; // @synthesize maxFrameRate=_maxFrameRate;
@property(readonly, nonatomic) NSDictionary *embeddedCaptureDeviceConfiguration;
- (int)sinkType;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end
