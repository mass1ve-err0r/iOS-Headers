//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PUTabbedLibrarySettings, PXPreloadScheduler;

@interface PUTabbedLibraryViewModel : NSObject
{
    NSArray *_tabInfos;
    PUTabbedLibrarySettings *_settings;
    PXPreloadScheduler *_preloadScheduler;
}

+ (id)viewModelWithDefaultParameters;
@property(retain, nonatomic) PXPreloadScheduler *preloadScheduler; // @synthesize preloadScheduler=_preloadScheduler;
@property(retain, nonatomic) PUTabbedLibrarySettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSArray *tabInfos; // @synthesize tabInfos=_tabInfos;
- (void).cxx_destruct;
- (id)tabbedLibraryViewController:(id)arg1 tabBarItemForContentMode:(int)arg2;
- (_Bool)_shouldShowSharedTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowSearchTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowForYouTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowMemoriesTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)tabbedLibraryViewController:(id)arg1 shouldShowTabForContentMode:(int)arg2;
- (id)tabInfoForContentMode:(int)arg1;
- (id)initWithSettings:(id)arg1 preloadScheduler:(id)arg2;

@end

