//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OAVReadClient-Protocol.h>

__attribute__((visibility("hidden")))
@interface WXVmlReadClient : NSObject <OAVReadClient>
{
}

+ (int)vmlSupportLevel;
+ (void)readClientDataFromGroup:(struct _xmlNode *)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(struct _xmlNode *)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readFromDrawable:(struct _xmlNode *)arg1 toContent:(id)arg2;
+ (int)zIndex:(id)arg1;
+ (_Bool)floating:(id)arg1;
+ (double)wrapDistanceBottom:(id)arg1;
+ (double)wrapDistanceRight:(id)arg1;
+ (double)wrapDistanceTop:(id)arg1;
+ (double)wrapDistanceLeft:(id)arg1;
+ (int)relativeVerticalPosition:(id)arg1;
+ (int)verticalPosition:(id)arg1;
+ (int)relativeHorizontalPosition:(id)arg1;
+ (int)horizontalPosition:(id)arg1;
+ (void)copyFromDrawable:(id)arg1 toContent:(id)arg2;
+ (void)initialize;
+ (void)readTextWrappingFromParent:(struct _xmlNode *)arg1 toAnchor:(id)arg2;

@end

