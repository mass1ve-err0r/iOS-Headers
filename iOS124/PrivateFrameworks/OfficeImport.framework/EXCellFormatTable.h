//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXCellFormatTable : NSObject
{
}

+ (void)setDefaultWithState:(id)arg1;
+ (void)readFromCellStylesElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromCellStyleXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromCellXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readCellFormatsFrom:(struct _xmlNode *)arg1 isStyle:(_Bool)arg2 state:(id)arg3;

@end

