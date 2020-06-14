//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CUICommonAssetStorage, CUINamedImageDescription, NSArray, NSDictionary, NSString;

@protocol CUIStructuredThemeStorage2
- (NSDictionary *)appearances;
- (NSString *)nameForAppearanceIdentifier:(unsigned short)arg1;
- (unsigned short)appearanceIdentifierForName:(NSString *)arg1;
- (NSArray *)imagesWithName:(NSString *)arg1;
- (NSArray *)allImageNames;
- (const struct _renditionkeytoken *)renditionKeyForName:(NSString *)arg1;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;

@optional
- (CUICommonAssetStorage *)themeStore;
- (NSString *)renditionNameForKeyList:(struct _renditionkeytoken *)arg1;
- (void)removeImageNamed:(NSString *)arg1 withDescription:(CUINamedImageDescription *)arg2;
- (void)insertCGImage:(struct CGImage *)arg1 withName:(NSString *)arg2 andDescription:(CUINamedImageDescription *)arg3;
@end

