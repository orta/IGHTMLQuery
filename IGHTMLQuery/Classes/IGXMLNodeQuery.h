//
//  IGXMLNodeQuery.h
//  IGHTMLQuery
//
//  Created by Francis Chong on 21/8/13.
//  Copyright (c) 2013 Ignition Soft. All rights reserved.
//

#import <Foundation/Foundation.h>

@class IGXMLNodeSet;

@protocol IGXMLNodeQuery <NSObject>

/**
 Query a node with XPath
 @param xpath used to query the document
 @return elements matched by supplied XPath query.
 */
- (IGXMLNodeSet*) queryWithXPath:(NSString*)xpath;

@end