//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OAXClient-Protocol.h>

__attribute__((visibility("hidden")))
@interface OAXClient : NSObject <OAXClient>
{
}

+ (_Bool)sourceDrawableIsTopLevel:(struct _xmlNode *)arg1;
- (id)readGraphicData:(struct _xmlNode *)arg1 state:(id)arg2;
- (id)readOle:(struct _xmlNode *)arg1 state:(id)arg2;
- (void)postprocessHyperlink:(id)arg1 relationship:(id)arg2 state:(id)arg3;
- (id)readClientTextField:(struct _xmlNode *)arg1 identity:(id)arg2 paragraph:(id)arg3 state:(id)arg4;
- (void)readBlipExtWithURI:(id)arg1 fromNode:(struct _xmlNode *)arg2 toDrawable:(id)arg3 state:(id)arg4;
- (void)readClientDataFromGraphicalFramePropertiesNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;
- (void)readClientDataFromGraphicDataNode:(struct _xmlNode *)arg1 toDiagram:(id)arg2 state:(id)arg3;
- (void)readClientDataFromGroupNode:(struct _xmlNode *)arg1 toGroup:(id)arg2 state:(id)arg3;
- (void)readClientDataFromPictureNode:(struct _xmlNode *)arg1 toImage:(id)arg2 state:(id)arg3;
- (void)readClientDataFromShapeNode:(struct _xmlNode *)arg1 toShape:(id)arg2 state:(id)arg3;
- (void)readClientDataFromNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;
- (struct _xmlNode *)genericNonVisualPropertiesNodeForDrawableNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;
- (id)readClientDrawableFromXmlNode:(struct _xmlNode *)arg1 state:(id)arg2;

@end

