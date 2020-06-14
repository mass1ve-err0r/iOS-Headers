//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDStyledInfo.h>

#import <iWorkImport/TSDFittingOnInsertion-Protocol.h>

@class NSString, TSDAttribution, TSPData;

__attribute__((visibility("hidden")))
@interface TSDMediaInfo : TSDStyledInfo <TSDFittingOnInsertion>
{
    struct CGSize _originalSize;
    TSDAttribution *_attribution;
    struct {
        unsigned int isPlaceholder:1;
        unsigned int wasMediaReplaced:1;
    } _flags;
}

@property(nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSPData *mediaDataForDragging;
- (void)scaleDownSizeToFitWithinSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGPoint centerForReplacingWithNewMedia;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (void)takePropertiesFromReplacedMediaInfo:(id)arg1;
@property(readonly, nonatomic) _Bool canBeReplaced;
@property(readonly, nonatomic) _Bool canBeMediaPlaceholder;
@property(readonly, nonatomic) _Bool canResetMediaSize;
@property(readonly, nonatomic) struct CGSize rawOriginalSize;
@property(readonly, nonatomic) struct CGSize rawDataSize;
@property(readonly, nonatomic) NSString *mediaFileType;
@property(readonly, nonatomic) NSString *mediaDisplayName;
- (void)setGeometry:(id)arg1;
@property(nonatomic) _Bool wasMediaReplaced;
@property(nonatomic) _Bool isPlaceholder;
- (void)setFlagsWithPlaceholder:(_Bool)arg1 wasMediaReplaced:(_Bool)arg2;
@property(nonatomic) unsigned int flags;
@property(readonly, nonatomic) struct CGSize defaultOriginalSize;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) unsigned short propertyIdForOriginalSizeCommand;
@property(readonly, nonatomic) unsigned short propertyIdForFlagsCommand;
@property(readonly, nonatomic) NSString *propertyNameForOriginalSizeCommand;
@property(readonly, nonatomic) NSString *propertyNameForFlagsCommand;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
@property(copy, nonatomic) TSDAttribution *attribution;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

