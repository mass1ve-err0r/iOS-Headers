//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKDiagnostics : NSObject
{
}

+ (void)saveTransitState:(id)arg1 forPaymentApplication:(id)arg2;
+ (id)_metadataForCardAtURL:(id)arg1;
+ (id)_allPasses;
+ (id)_secureElementData;
+ (id)generateUbiquityDiagnosticsFile:(_Bool)arg1;
+ (void)generateZippedDiagnosticsPackageWithPassLibrary:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)generateDiagnosticsPackageWithPassLibrary:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end

