//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PXContextualMemoriesSettings;

@interface PXContextualMemoriesSettingsController : NSObject
{
    _Bool _requestingUpdates;
    PXContextualMemoriesSettings *_settings;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_registrationIdentifiers;
}

+ (id)sharedController;
@property(retain, nonatomic) NSMutableArray *registrationIdentifiers; // @synthesize registrationIdentifiers=_registrationIdentifiers;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic, getter=isRequestingUpdates) _Bool requestingUpdates; // @synthesize requestingUpdates=_requestingUpdates;
@property(readonly, nonatomic) PXContextualMemoriesSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)unregisterForLocationPrefetchingWithIdentifier:(id)arg1;
- (void)registerForLocationPrefetchingWithIdentifier:(id)arg1;
- (void)requestUpdatedContextualMemoriesSettingsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

