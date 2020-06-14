//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSourceManager.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>

@class NSArray, NSString;

@interface PXMultiplexedAssetsDataSourceManager : PXAssetsDataSourceManager <PXAssetsDataSourceManagerObserver>
{
    NSArray *_assetsDataSourceManagers;
    long long _indexOfSelectedAssetsDataSourceManager;
}

@property(nonatomic) long long indexOfSelectedAssetsDataSourceManager; // @synthesize indexOfSelectedAssetsDataSourceManager=_indexOfSelectedAssetsDataSourceManager;
@property(readonly, copy, nonatomic) NSArray *assetsDataSourceManagers; // @synthesize assetsDataSourceManagers=_assetsDataSourceManagers;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
@property(readonly, nonatomic) PXAssetsDataSourceManager *selectedAssetsDataSourceManager;
- (id)initWithAssetsDataSourceManagers:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

