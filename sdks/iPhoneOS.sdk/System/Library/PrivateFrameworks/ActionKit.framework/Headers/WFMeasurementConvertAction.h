//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFMeasurementConvertAction : WFAction
{
}

- (id)unitWithSymbol:(id)arg1;
- (id)currentUnitType;
- (id)unitParameter;
- (id)outputMeasurementUnitType;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)parametersRequiringUserInputAlongsideParameter:(id)arg1;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end
