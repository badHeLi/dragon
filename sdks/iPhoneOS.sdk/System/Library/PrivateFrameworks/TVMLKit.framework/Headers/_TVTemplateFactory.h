//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;

__attribute__((visibility("hidden")))
@interface _TVTemplateFactory : NSObject
{
    NSBundle *_tvmlKitBundle;
}

// - (void).cxx_destruct;
- (void)_registerCustomAnimators;
- (void)_registerTemplateControllers;
- (void)_registerStyleSheet:(id)arg1 forTemplate:(id)arg2 parentStyleSheets:(id)arg3;
- (void)registerProductTemplateURL:(id)arg1 forTemplateName:(id)arg2 includeParentStyleSheets:(BOOL)arg3;
- (id)init;

@end
