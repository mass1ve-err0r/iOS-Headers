//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import <iWorkImport/TSSPreset-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPCharacterStyle : TSSStyle <TSSPreset>
{
}

+ (id)nullStyleWithContext:(id)arg1;
+ (id)nullStyleName;
+ (id)propertiesAllowingNSNull;
+ (id)nonEmphasisCharacterProperties;
+ (id)emphasisProperties;
+ (id)properties;
- (_Bool)transformsFontSizes;
- (id)archivableRepresentationOfChangeSet:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct CharacterStyleArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (int)writingDirection;
- (void)loadFromArchive:(const struct CharacterStyleArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) NSString *presetKind;

@end

