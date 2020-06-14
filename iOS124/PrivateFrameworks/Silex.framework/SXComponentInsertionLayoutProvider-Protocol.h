//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXColumnLayout, SXUnitConverter;
@protocol SXBlueprintMarker, SXComponent, SXEdgeSpacing;

@protocol SXComponentInsertionLayoutProvider <NSObject>
@property(readonly, nonatomic) SXColumnLayout *columnLayout;
@property(readonly, nonatomic) struct CGSize documentSize;
@property(readonly, nonatomic) struct CGSize viewportSize;
- (SXUnitConverter *)unitConverterForMarker:(id <SXBlueprintMarker>)arg1;
- (id <SXEdgeSpacing>)suggestedMarginForMarker:(id <SXBlueprintMarker>)arg1;
- (struct CGRect)frameForComponent:(id <SXComponent>)arg1;
@end

