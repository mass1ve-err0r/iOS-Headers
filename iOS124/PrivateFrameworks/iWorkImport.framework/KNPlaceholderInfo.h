//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPShapeInfo.h>

__attribute__((visibility("hidden")))
@interface KNPlaceholderInfo : TSWPShapeInfo
{
}

+ (Class)classForUnarchiver:(id)arg1;
- (_Bool)isEmpty;
- (_Bool)shouldHideEmptyBullets;
- (_Bool)autoListTermination;
- (_Bool)autoListRecognition;
- (id)instructionalText;
- (_Bool)displaysInstructionalText;
- (_Bool)isAllowedInGroups;
- (Class)layoutClass;
- (Class)repClass;
- (id)copyAsShapeInfoWithContext:(id)arg1;
- (int)kind;
- (void)saveToArchive:(struct PlaceholderArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct PlaceholderArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;

@end

