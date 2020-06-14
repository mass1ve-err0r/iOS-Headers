//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _LSDisplayNameConstructor : NSObject
{
    NSString *_originalName;
    NSString *_baseName;
    NSString *_extension;
    NSString *_secondaryExtension;
    unsigned int _wantsHiddenExtension:1;
    unsigned int _isFolder:1;
    unsigned int _hadNonASCIICharacter:1;
    unsigned int _hadColonInFSName:1;
    unsigned int _hadBiDiControlCharacter:1;
    unsigned int _hadForbiddenCharacter:1;
}

+ (void)setSuffixForRemoteXCTests:(id)arg1;
+ (id)suffixForRemoteXCTests;
+ (id)displayNameConstructorsWithContext:(struct LSContext *)arg1 node:(id)arg2 error:(id *)arg3;
+ (id)displayNameConstructorWithContext:(struct LSContext *)arg1 node:(id)arg2 error:(id *)arg3;
+ (void)setShowAllExtensions:(_Bool)arg1;
+ (_Bool)showAllExtensions;
+ (id)visuallyOrderCharactersInString:(id)arg1 error:(id *)arg2;
+ (id)concatenateBaseName:(id)arg1 andExtension:(id)arg2;
+ (void)getExtensionRange:(struct _NSRange *)arg1 secondaryExtensionRange:(struct _NSRange *)arg2 fromFileName:(id)arg3 considerConfusables:(_Bool)arg4;
- (void).cxx_destruct;
- (void)getUnlocalizedBaseName:(id *)arg1 extension:(id *)arg2 requiresAdditionalBiDiControlCharacters:(_Bool *)arg3;
- (id)unlocalizedNameWithContext:(struct LSContext *)arg1 asIfShowingAllExtensions:(id)arg2;
- (id)unlocalizedNameWithContext:(struct LSContext *)arg1;
- (id)init;
- (_Bool)canSetExtensionHiddenWithContext:(struct LSContext *)arg1;
- (_Bool)showExtensionWithContext:(struct LSContext *)arg1 asIfShowingAllExtensions:(id)arg2;
- (_Bool)mayHideExtensionWithContext:(struct LSContext *)arg1;
- (_Bool)wantsHiddenExtension;
- (id)insertCompleteNameBiDiControlCharacters:(id)arg1;
- (id)insertNameComponentBiDiControlCharacters:(id)arg1;
- (id)transformBeforeCombining:(id)arg1 needsBiDiControlCharacters:(_Bool *)arg2;
- (void)getTransformedBaseName:(id *)arg1 extension:(id *)arg2 needsBiDiControlCharacters:(_Bool [2])arg3;
- (id)combineBaseName:(id)arg1 extension:(id)arg2;
- (id)replaceForbiddenCharacters:(id)arg1;
- (id)cleanSecondaryExtension:(id)arg1;
- (void)initNamePartsWithDisplayName:(id)arg1;
- (void)initContentBitsWithDisplayName:(id)arg1 treatAsFSName:(_Bool)arg2;
- (void)initNodeBitsWithContext:(struct LSContext *)arg1 node:(id)arg2 bundleClass:(const unsigned int *)arg3;
- (id)initWithContext:(struct LSContext *)arg1 node:(id)arg2 bundleClass:(const unsigned int *)arg3 desiredDisplayName:(id)arg4 treatAsFSName:(_Bool)arg5;
- (_Bool)isStringNaturallyRTL:(id)arg1;
- (id)balanceBiDiControlCharacter:(unsigned short)arg1 inString:(id)arg2 imbalanceAmount:(long long)arg3;
- (id)balanceBiDiControlCharacters:(id)arg1;

@end

