//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDContainerInfo.h>

#import <SilexText/STTangierRepDirectLayerHostingInfo-Protocol.h>

@class NSSet, NSString, STTextTangierStorage;
@protocol TSDRepDirectLayerHosting;

@interface STTextTangierContainerInfo : TSDContainerInfo <STTangierRepDirectLayerHostingInfo>
{
    _Bool _isSelectable;
    _Bool _shouldHyphenate;
    STTextTangierStorage *_storage;
    NSSet *_fixedExclusionPaths;
    id <TSDRepDirectLayerHosting> _directLayerHost;
}

@property(nonatomic) __weak id <TSDRepDirectLayerHosting> directLayerHost; // @synthesize directLayerHost=_directLayerHost;
@property(nonatomic) _Bool shouldHyphenate; // @synthesize shouldHyphenate=_shouldHyphenate;
@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(retain, nonatomic) NSSet *fixedExclusionPaths; // @synthesize fixedExclusionPaths=_fixedExclusionPaths;
@property(readonly, nonatomic) STTextTangierStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *rangedExclusionPaths;
- (Class)repClass;
- (Class)layoutClass;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 stylesheet:(id)arg3 string:(id)arg4 locale:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

