/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPlayEvent : MPModelObject

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, copy) NSDate *datePlayed;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, retain) MPModelRadioStation *radioStation;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__album_KEY;
+ (id)__artist_KEY;
+ (id)__datePlayed_KEY;
+ (id)__playlist_KEY;
+ (id)__radioStation_KEY;

- (id)contentItemCollectionInfo;
- (id)genericObjectRepresentation;
- (long long)itemType;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)mpc_radioContentReference;

@end