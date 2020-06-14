//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>

@class BSSettings, NSArray, NSDate, NSString, SSEnvironmentDescriptionAppleInternalOptions, SSImageSurface, SSUIServiceOptions;

@interface SSEnvironmentDescription : NSObject <BSXPCCoding>
{
    NSArray *_elements;
    NSString *_identifier;
    NSString *_sessionIdentifier;
    unsigned long long _presentationMode;
    SSImageSurface *_imageSurface;
    double _imageScale;
    SSUIServiceOptions *_serviceOptions;
    NSDate *_date;
    SSEnvironmentDescriptionAppleInternalOptions *_appleInternalOptions;
    struct CGSize _imagePixelSize;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SSEnvironmentDescriptionAppleInternalOptions *appleInternalOptions; // @synthesize appleInternalOptions=_appleInternalOptions;
@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) SSUIServiceOptions *serviceOptions; // @synthesize serviceOptions=_serviceOptions;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) struct CGSize imagePixelSize; // @synthesize imagePixelSize=_imagePixelSize;
@property(retain, nonatomic) SSImageSurface *imageSurface; // @synthesize imageSurface=_imageSurface;
@property(readonly, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) BSSettings *bsSettings;
@property(readonly, nonatomic) NSArray *elementUnitRects;
@property(readonly, nonatomic) struct CGSize imagePointSize;
@property(readonly, nonatomic) NSString *briefDescription;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)takeElementsFromDisplayLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

