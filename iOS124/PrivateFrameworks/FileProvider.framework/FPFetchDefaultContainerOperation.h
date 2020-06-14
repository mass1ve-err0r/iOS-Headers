//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class NSFileProviderDomain, NSString;

__attribute__((visibility("hidden")))
@interface FPFetchDefaultContainerOperation : FPActionOperation
{
    NSString *_appName;
    NSString *_appIdentifier;
    NSFileProviderDomain *_domain;
    CDUnknownBlockType _fetchCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)mainWithExtensionProxy:(id)arg1;
- (id)initForApplicationProxy:(id)arg1 provider:(id)arg2;

@end

