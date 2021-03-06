/*
Copyright (c) 2009 Yahoo! Inc.  All rights reserved.  The copyrights
embodied in the content of this file are licensed under the BSD
(revised) open source license
 */

#ifndef LDA_CORE_H
#define LDA_CORE_H

void drive_lda(void*);
void lda_parse_flags(vw&, std::vector<std::string>&, po::variables_map&);

#endif
