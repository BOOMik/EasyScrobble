//
//  LPEasyScrobble.h
//
//  Created by Adam Drew on 9/5/12.
//  Copyright (c) 2012 Adam Drew, AmStaff Apps. All rights reserved.
//	adam@amstaffapps.com
//
//	EasyScrobble: A stupidly easy Last.fm scrobbler for iOS or Mac OS X Apps
//

#import <Foundation/Foundation.h>
#import "MediaPlayer/MediaPlayer.h"
#import <CommonCrypto/CommonDigest.h>

@interface LPEasyScrobble : NSObject 

@property (strong, nonatomic) NSString *username;
@property (strong, nonatomic) NSString *password;
@property (strong, nonatomic) NSString *sessionKey;
@property (strong, nonatomic) NSString *APIKey;
@property (strong, nonatomic) NSString *APISecret;

@property BOOL isInDebug;
@property (strong, nonatomic) NSString *lastScrobbling;
@property (strong, nonatomic) NSString *lastNowPlaying;

- (void) debugLog: (NSString*) stringToLog;

- (BOOL) setUsername: (NSString*) userNameArg andPassword: (NSString *) passwordArg;

- (BOOL) scrobbleTrack:(MPMediaItem *) track ;
- (BOOL) scrobbleTrack:(NSString*)artist song:(NSString*)song album:(NSString*)album ;


- (BOOL) nowPlaying:(MPMediaItem *) track ;
- (BOOL) nowPlaying:(NSString*)artist song:(NSString*)song;

- (BOOL) loveTrack:(MPMediaItem *) track ;

- (BOOL) startSession;

- (NSString*) MD5StringOfString:(NSString*) inputStr;

- ( NSString *) scrubString: (NSString *) string;

@end
