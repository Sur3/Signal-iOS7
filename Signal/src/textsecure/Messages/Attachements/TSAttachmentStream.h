//
//  TSAttachementStream.h
//  Signal
//
//  Created by Frederic Jacobs on 17/12/14.
//  Copyright (c) 2014 Open Whisper Systems. All rights reserved.
//

#ifndef NS_DESIGNATED_INITIALIZER
#if __has_attribute(objc_designated_initializer)
#define NS_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
#else
#define NS_DESIGNATED_INITIALIZER
#endif
#endif

#import "TSAttachment.h"

@interface TSAttachmentStream : TSAttachment <YapDatabaseRelationshipNode>

@property (nonatomic) BOOL isDownloaded;

- (instancetype)initWithIdentifier:(NSString*)identifier
                              data:(NSData*)data
                               key:(NSData*)key
                       contentType:(NSString*)contentType NS_DESIGNATED_INITIALIZER;

- (UIImage *)image;

- (BOOL)isImage;
- (BOOL)isVideo;
-(NSURL*)mediaURL;

+ (void)deleteAttachments;
+ (NSString*)attachmentsFolder;

@end
