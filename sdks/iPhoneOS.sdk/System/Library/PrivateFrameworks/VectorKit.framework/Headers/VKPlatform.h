//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VKPlatform : NSObject
{
    NSUInteger _memSize;
    int _numCPUs;
    BOOL _isMac;
    BOOL _proceduralRoadAlpha;
    BOOL _useCheapTrafficShader;
    BOOL _supportsBuildingStrokes;
    BOOL _supports3DBuildingStrokes;
    BOOL _lowPerformanceDevice;
    BOOL _supportsCoastlineGlows;
    BOOL _supportsPerFragmentLighting;
    BOOL _supportsARMode;
}

+ (id)sharedPlatform;
@property(readonly, nonatomic) BOOL supportsARMode; // @synthesize supportsARMode=_supportsARMode;
@property(readonly, nonatomic) BOOL supportsPerFragmentLighting; // @synthesize supportsPerFragmentLighting=_supportsPerFragmentLighting;
@property(readonly, nonatomic) BOOL supportsCoastlineGlows; // @synthesize supportsCoastlineGlows=_supportsCoastlineGlows;
@property(readonly, nonatomic) BOOL supports3DBuildingStrokes; // @synthesize supports3DBuildingStrokes=_supports3DBuildingStrokes;
@property(readonly, nonatomic) BOOL supportsBuildingStrokes; // @synthesize supportsBuildingStrokes=_supportsBuildingStrokes;
@property(readonly, nonatomic) BOOL useCheapTrafficShader; // @synthesize useCheapTrafficShader=_useCheapTrafficShader;
@property(readonly, nonatomic) BOOL proceduralRoadAlpha; // @synthesize proceduralRoadAlpha=_proceduralRoadAlpha;
@property(readonly, nonatomic) NSUInteger memorySize; // @synthesize memorySize=_memSize;
@property(readonly, nonatomic) double routeLineSimplificationEpsilon;
@property(readonly, nonatomic) BOOL lowPerformanceDevice;
@property(readonly, nonatomic) BOOL supports3DBuildings;
@property(readonly, nonatomic) BOOL supportsBuildingShadows;
@property(readonly, nonatomic) unsigned char processingQueueWidth;
@property(readonly, nonatomic) unsigned char tileDecodeQueueWidth;
@property(readonly, nonatomic) BOOL shouldStyleLabelsInParallel;
@property(readonly, nonatomic) BOOL supportsHiResBuildings;
@property(readonly, nonatomic) BOOL shouldDrawWhenReady;
@property(readonly, nonatomic) BOOL isPad;
@property(readonly, nonatomic) BOOL canMakeSharingThumbnails;
@property(readonly, nonatomic) BOOL supportsHiResRTT;
@property(readonly, nonatomic) unsigned int tilePrefetchNumberOfScreens;
- (NSUInteger)tileMaximumLimit:(NSUInteger)arg1;
@property(readonly, nonatomic) BOOL roadsWithSimpleLineMeshesAvailable;
- (void)_determineHardware;
- (NSUInteger)_calculateMemSize;
- (void)dealloc;
- (id)init;

@end
