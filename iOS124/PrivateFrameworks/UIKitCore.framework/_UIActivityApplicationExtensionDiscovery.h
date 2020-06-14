//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _UIMatchingExtensionsResult;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIActivityApplicationExtensionDiscovery : NSObject
{
    NSArray *_extensionPointIdentifiers;
    NSObject<OS_dispatch_queue> *_primedExtensionsQueue;
    _UIMatchingExtensionsResult *_primedExtensionsResult;
}

+ (id)extensionMatchingDictionariesForExtensionItems:(id)arg1;
+ (id)extensionBasedActivityForExtension:(id)arg1;
@property(retain) _UIMatchingExtensionsResult *primedExtensionsResult; // @synthesize primedExtensionsResult=_primedExtensionsResult;
@property(retain) NSObject<OS_dispatch_queue> *primedExtensionsQueue; // @synthesize primedExtensionsQueue=_primedExtensionsQueue;
@property(copy, nonatomic) NSArray *extensionPointIdentifiers; // @synthesize extensionPointIdentifiers=_extensionPointIdentifiers;
- (void).cxx_destruct;
- (id)activitiesForMatchingContext:(id)arg1 error:(id *)arg2;
- (void)primeWithDiscoveryContext:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithExtensionPointIdentifiers:(id)arg1;

@end

