//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/JSExport-Protocol.h>

@class NSDictionary, NSString, NUJSDepthProperties, NUJSRAWImageProperties;

@protocol NUJSImagePropertiesExport <JSExport>
@property(readonly) NUJSRAWImageProperties *rawImageProperties;
@property(readonly) NUJSDepthProperties *depthProperties;
@property(readonly) NSString *fileUTI;
@property(readonly) NSDictionary *metadata;
@end

